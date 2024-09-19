#include "MyForm.h"
#include "MyForm1.h"
#include <Windows.h>
#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    KursovaCPZ::MyForm form;
    Application::Run(% form);
}

enum ProfileType {
    STUDENT,
    TEACHER
};

class Profile {
public:
    virtual std::string GetProfileDetails() = 0;
    virtual void SaveProfileToFile(std::ofstream& outputFile) = 0;
    virtual ~Profile() {}
};

class ProfileBuilder {
protected:
    ProfileType profileType;
public:
    virtual void SetProfileType(ProfileType type) {}
    virtual void SetLastName(std::string lname) = 0;
    virtual void SetFirstName(std::string fname) = 0;
    virtual void SetID(int id) = 0;
    virtual void SetSubject(std::string subject) = 0;
    virtual void SetCourse(int course) = 0;
    virtual void SetSpeciality(std::string speciality) = 0;
    virtual void SetDepartment(std::string department) = 0;
    virtual Profile* GetProfile() = 0;
    virtual ~ProfileBuilder() {}
};

class StudentProfile : public Profile {
private:
    std::string studentfName;
    std::string studentlName;
    int studentCourse, studentID;
    std::string  studentSpeciality, studentDepartment;

public:
    StudentProfile() : studentfName(""), studentlName(""), studentID(0), studentCourse(0), studentSpeciality(""), studentDepartment("") {}

    void SetFirstName(const std::string& fname) {
        studentfName = fname;
    }

    void SetLastName(const std::string& lname) {
        studentlName = lname;
    }

    void SetID(int id) {
        studentID = id;
    }

    void SetCourse(int course) {
        studentCourse = course;
    }

    void SetSpeciality(const std::string& speciality) {
        studentSpeciality = speciality;
    }

    void SetDepartment(const std::string& department) {
        studentDepartment = department;
    }

    std::string GetProfileDetails() override {
        return "�������: " + studentfName + studentlName + ", ID: " + std::to_string(studentID) + ", ����: " + std::to_string(studentCourse) + ", ������������: " + studentSpeciality + ", �������: " + studentDepartment;
    }

    void SaveProfileToFile(std::ofstream& outputFile) override {
        outputFile << "�������\n";
        outputFile << "ID: " << studentID << "\n";
        outputFile << "��'�: " << studentfName << "\n";
        outputFile << "�������: " << studentlName << "\n";
        outputFile << "����: " << studentCourse << "\n";
        outputFile << "������������: " << studentSpeciality << "\n";
        outputFile << "�������: " << studentDepartment << "\n";
    }
};

class TeacherProfile : public Profile {
private:
    std::string teacherfName, teacherlName;
    int teacherID;
    std::string teacherSubject;
    std::string teacherDepartment;

public:
    TeacherProfile() : teacherfName(""), teacherlName(""), teacherID(0), teacherSubject(""), teacherDepartment("") {}

    void SetFirstName(const std::string& fname) {
        teacherfName = fname;
    }

    void SetLastName(const std::string& lname) {
        teacherlName = lname;
    }

    void SetID(int id) {
        teacherID = id;
    }

    void SetSubject(const std::string& subject) {
        teacherSubject = subject;
    }

    void SetDepartment(const std::string& department) {
        teacherDepartment = department;
    }

    std::string GetProfileDetails() override {
        return "��������: " + teacherfName + teacherlName + ", ID: " + std::to_string(teacherID) + ", �������: " + teacherSubject + ", �������: " + teacherDepartment;
    }

    void SaveProfileToFile(std::ofstream& outputFile) override {
        outputFile << "��������\n";
        outputFile << "ID: " << teacherID << "\n";
        outputFile << "��'�: " << teacherfName << "\n";
        outputFile << "�������: " << teacherlName << "\n";
        outputFile << "�������: " << teacherSubject << "\n";
        outputFile << "�������: " << teacherDepartment << "\n";
    }
};

class StudentProfileBuilder : public ProfileBuilder {
private:
    StudentProfile* studentProfile;

public:
    StudentProfileBuilder() : studentProfile(new StudentProfile()) {}

    void SetFirstName(std::string fname) override {
        studentProfile->SetFirstName(fname);
    }

    void SetLastName(std::string lname) override {
        studentProfile->SetLastName(lname);
    }

    void SetID(int id) override {
        studentProfile->SetID(id);
    }

    void SetSubject(std::string subject) override {
        // Not applicable for StudentProfile
    }

    void SetCourse(int course) override {
        studentProfile->SetCourse(course);
    }

    void SetSpeciality(std::string speciality) override {
        studentProfile->SetSpeciality(speciality);
    }

    void SetDepartment(std::string department) override {
        studentProfile->SetDepartment(department);
    }

    Profile* GetProfile() override {
        return studentProfile;
    }

    void SetProfileType(ProfileType type) override {
        if (type != ProfileType::STUDENT) {
            std::cout << "�������: ������������� ��� ������� ��� ��������." << std::endl;
        }
        else {
            profileType = type;
        }
    }

    ~StudentProfileBuilder() {
        delete studentProfile;
    }
};

class TeacherProfileBuilder : public ProfileBuilder {
private:
    TeacherProfile* teacherProfile;

public:
    TeacherProfileBuilder() : teacherProfile(new TeacherProfile()) {}

    void SetFirstName(std::string fname) override {
        teacherProfile->SetFirstName(fname);
    }

    void SetLastName(std::string lname) override {
        teacherProfile->SetLastName(lname);
    }

    void SetID(int id) override {
        teacherProfile->SetID(id);
    }

    void SetSubject(std::string subject) override {
        teacherProfile->SetSubject(subject);
    }

    void SetCourse(int course) override {
    }

    void SetSpeciality(std::string speciality) override {
    }

    void SetDepartment(std::string department) override {
        teacherProfile->SetDepartment(department);
    }

    Profile* GetProfile() override {
        return teacherProfile;
    }

    void SetProfileType(ProfileType type) override {
        if (type != ProfileType::TEACHER) {
            std::cout << "�������: ������������� ��� ������� ��� �������." << std::endl;
        }
        else {
            profileType = type;
        }
    }

    ~TeacherProfileBuilder() {
        delete teacherProfile;
    }
};

class ProfileDirector {
public:
    Profile* CreateProfile(ProfileBuilder& builder, const std::string& fname, const std::string& lname, int id, const std::string& subject, const int course, const std::string& speciality, const std::string& department) {
        builder.SetFirstName(fname);
        builder.SetLastName(lname);
        builder.SetID(id);
        builder.SetSubject(subject);
        builder.SetCourse(course);
        builder.SetSpeciality(speciality);
        builder.SetDepartment(department);
        return builder.GetProfile();
    }
};

void InputStudentData(ProfileBuilder& studentBuilder, const std::string& fname, const std::string& lname, int id, const int course, const std::string& speciality, const std::string& department) {
    studentBuilder.SetFirstName(fname);
    studentBuilder.SetLastName(lname);
    studentBuilder.SetID(id);
    studentBuilder.SetCourse(course);
    studentBuilder.SetSpeciality(speciality);
    studentBuilder.SetDepartment(department);
}

void InputTeacherData(ProfileBuilder& teacherBuilder, const std::string& fname, const std::string& lname, const std::string& subject, const std::string& department) {
    teacherBuilder.SetFirstName(fname);
    teacherBuilder.SetLastName(lname);
    teacherBuilder.SetSubject(subject);
    teacherBuilder.SetDepartment(department);
}

class StudentProfileDecorator : public Profile {
protected:
    Profile* profile;
    std::string studentAddress;
    std::string studentPhoneNumber;

public:
    StudentProfileDecorator(Profile* profile, const std::string& address, const std::string& phoneNumber)
        : profile(profile), studentAddress(address), studentPhoneNumber(phoneNumber) {}

    std::string GetProfileDetails() override {
        std::string details = profile->GetProfileDetails();
        details += ", ������: " + studentAddress + ", �������: " + studentPhoneNumber;
        return details;
    }

    void SaveProfileToFile(std::ofstream& outputFile) override {
        profile->SaveProfileToFile(outputFile);
        outputFile << "������: " << studentAddress << "\n";
        outputFile << "�������: " << studentPhoneNumber << "\n\n";
    }
};

class TeacherProfileDecorator : public Profile {
protected:
    Profile* profile;
    std::string additionalSubjects;
    std::string phoneNumber;

public:
    TeacherProfileDecorator(Profile* profile, const std::string& subjects, const std::string& phone)
        :profile(profile), additionalSubjects(subjects), phoneNumber(phone) {}

    std::string GetProfileDetails() override {
        std::string details = profile->GetProfileDetails();
        details += ", �������� ��������: " + additionalSubjects + ", �������: " + phoneNumber;
        return details;
    }

    void SaveProfileToFile(std::ofstream& outputFile) override {
        profile->SaveProfileToFile(outputFile);
        outputFile << "�������� ��������: " << additionalSubjects << "\n";
        outputFile << "�������: " << phoneNumber << "\n\n";
    }
};

void SaveProfileToFile(Profile* profile) {
    std::ofstream outputFile("profiles.txt", std::ios::app);
    if (outputFile.is_open()) {
        profile->SaveProfileToFile(outputFile);
        outputFile.close();
    }
    else {
        std::cerr << "������� �������� ����� ��� ������!\n";
    }
}

System::Void KursovaCPZ::MyForm::buttonCreate_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm1^ f2 = gcnew MyForm1();
    f2->Show();
    MyForm::Hide();
    return System::Void();
}

System::Void KursovaCPZ::MyForm::buttonEditing_Click(System::Object^ sender, System::EventArgs^ e)
{

    return System::Void();
}

System::Void KursovaCPZ::MyForm::buttonDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void KursovaCPZ::MyForm::buttonSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
