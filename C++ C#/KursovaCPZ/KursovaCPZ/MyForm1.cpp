#include "MyForm1.h"
#include "MyForm.h"
#include "MyForm.cpp"


System::Void KursovaCPZ::MyForm1::buttonAddStudentProfil_Click(System::Object^ sender, System::EventArgs^ e)
{
    ProfileDirector director;
    StudentProfileBuilder studentBuilder;
    
    String^ studentfName = textBoxStudentfName->Text;
    String^ studentlName = textBoxStudentlName->Text;
    String^ studetSpeciality = textBoxStudentSpeciality->Text;
    String^ studentDepartment = textBoxStudentDepartment->Text;
    String^ studentAddress = textBoxStudentAddress->Text;
    String^ studentNumber = textBoxStdentNumber->Text;
    
    int studentID = Convert::ToInt32(textBoxStudentID->Text);
    int studentCourse = Convert::ToInt32(textBoxStudentCourse->Text);

    std::string stdStudentfName = msclr::interop::marshal_as<std::string>(studentfName);
    std::string stdStudentlName = msclr::interop::marshal_as<std::string>(studentlName);
    std::string stdstudetSpeciality = msclr::interop::marshal_as<std::string>(studetSpeciality);
    std::string stdstudentDepartment = msclr::interop::marshal_as<std::string>(studentDepartment);
    std::string stdstudentAddress = msclr::interop::marshal_as<std::string>(studentAddress);    
    std::string stdstudentNumber = msclr::interop::marshal_as<std::string>(studentNumber);

    studentBuilder.SetFirstName(stdStudentfName);
    studentBuilder.SetLastName(stdStudentlName);
    studentBuilder.SetID(studentID);
    studentBuilder.SetCourse(studentCourse);
    studentBuilder.SetSpeciality(stdstudetSpeciality);
    studentBuilder.SetDepartment(stdstudentDepartment);

    studentBuilder.SetProfileType(ProfileType::STUDENT);
    Profile* studentProfile = director.CreateProfile(studentBuilder, stdStudentfName, stdStudentlName, studentID, "", studentCourse, stdstudetSpeciality, stdstudentDepartment);

    if (studentProfile != nullptr) {
        StudentProfileDecorator* decoratedStudentProfile = new StudentProfileDecorator(studentProfile, stdstudentAddress, stdstudentNumber);
        SaveProfileToFile(decoratedStudentProfile); // Збереження декорованого профілю студента
    }
    return System::Void();
}
