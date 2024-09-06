#include <iostream>
#include <string>
using namespace std;

class Restaurant {
public:
    string name, location, cuisine;
    int capacity, yearOpened, numEmployees, rating;
    bool offersDelivery, open24Hours, servesAlcohol;

    Restaurant() : name("Unknown"), location("Unknown"), cuisine("Unknown"), capacity(0), yearOpened(0), 
                   numEmployees(0), rating(0), offersDelivery(false), open24Hours(false), servesAlcohol(false) {}

    Restaurant(string n, string loc, string cuis, int cap, int year, int emp, int rat, bool del, bool open24, bool alc)
    : name(n), location(loc), cuisine(cuis), capacity(cap), yearOpened(year), numEmployees(emp), rating(rat), 
      offersDelivery(del), open24Hours(open24), servesAlcohol(alc) {}

    void DisplayInfo() {
        cout << "Restaurant: " << name << ", Location: " << location << ", Cuisine: " << cuisine << endl;
    }
};

class MedicalClinic {
public:
    string name, location, specialization;
    int numDoctors, numNurses, numRooms, yearEstablished;
    bool offersEmergencyServices, openWeekends, hasPharmacy;

    MedicalClinic() : name("Unknown"), location("Unknown"), specialization("Unknown"), numDoctors(0), numNurses(0), 
                      numRooms(0), yearEstablished(0), offersEmergencyServices(false), openWeekends(false), hasPharmacy(false) {}

    MedicalClinic(string n, string loc, string spec, int doc, int nurs, int rooms, int year, bool emerg, bool weekend, bool pharm)
    : name(n), location(loc), specialization(spec), numDoctors(doc), numNurses(nurs), numRooms(rooms), yearEstablished(year), 
      offersEmergencyServices(emerg), openWeekends(weekend), hasPharmacy(pharm) {}

    void DisplayInfo() {
        cout << "Clinic: " << name << ", Specialization: " << specialization << ", Location: " << location << endl;
    }
};

class School {
public:
    string name, location, principalName, educationType;
    int numStudents, numTeachers, numClassrooms, yearFounded;
    bool publicSchool, offersExtracurriculars;

    School() : name("Unknown"), location("Unknown"), principalName("Unknown"), educationType("Unknown"), numStudents(0), 
               numTeachers(0), numClassrooms(0), yearFounded(0), publicSchool(false), offersExtracurriculars(false) {}

    School(string n, string loc, string prin, string eduType, int stud, int teach, int classR, int year, bool pub, bool extra)
    : name(n), location(loc), principalName(prin), educationType(eduType), numStudents(stud), numTeachers(teach), 
      numClassrooms(classR), yearFounded(year), publicSchool(pub), offersExtracurriculars(extra) {}

    void DisplayInfo() {
        cout << "School: " << name << ", Location: " << location << ", Principal: " << principalName << endl;
    }
};

class Book {
public:
    string title, author, genre, publisher;
    int publicationYear, numPages;
    bool hardcover, translated, availableInDigital;

    Book() : title("Unknown"), author("Unknown"), genre("Unknown"), publisher("Unknown"), publicationYear(0), numPages(0),
             hardcover(false), translated(false), availableInDigital(false) {}

    Book(string t, string a, string g, string pub, int year, int pages, bool hard, bool trans, bool digital)
    : title(t), author(a), genre(g), publisher(pub), publicationYear(year), numPages(pages), hardcover(hard), translated(trans), 
      availableInDigital(digital) {}

    void DisplayInfo() {
        cout << "Book: " << title << ", Author: " << author << ", Genre: " << genre << endl;
    }
};

class Student {
public:
    string name, major, university;
    int age, yearOfStudy, creditsCompleted;
    double gpa;
    bool fullTime, onScholarship, livesOnCampus;

    Student() : name("Unknown"), major("Unknown"), university("Unknown"), age(0), yearOfStudy(0), creditsCompleted(0), 
                gpa(0.0), fullTime(false), onScholarship(false), livesOnCampus(false) {}

    Student(string n, string maj, string uni, int a, int year, int credits, double g, bool full, bool sch, bool campus)
    : name(n), major(maj), university(uni), age(a), yearOfStudy(year), creditsCompleted(credits), gpa(g), 
      fullTime(full), onScholarship(sch), livesOnCampus(campus) {}

    void DisplayInfo() {
        cout << "Student: " << name << ", Major: " << major << ", University: " << university << endl;
    }
};

class Job {
public:
    string title, company, location, jobType;
    int salary, yearsExperienceRequired, hoursPerWeek;
    bool remoteOption, fullTime, benefitsIncluded;

    Job() : title("Unknown"), company("Unknown"), location("Unknown"), jobType("Unknown"), salary(0), 
            yearsExperienceRequired(0), hoursPerWeek(0), remoteOption(false), fullTime(false), benefitsIncluded(false) {}

    Job(string t, string c, string loc, string jType, int sal, int exp, int hours, bool remote, bool full, bool benefits)
    : title(t), company(c), location(loc), jobType(jType), salary(sal), yearsExperienceRequired(exp), 
      hoursPerWeek(hours), remoteOption(remote), fullTime(full), benefitsIncluded(benefits) {}

    void DisplayInfo() {
        cout << "Job: " << title << ", Company: " << company << ", Location: " << location << endl;
    }
};

int main() {
    Restaurant r("La Piazza", "New York", "Italian", 50, 1999, 20, 5, true, false, true);
    r.DisplayInfo();

    MedicalClinic mc("City Health", "Chicago", "Pediatrics", 10, 15, 30, 1985, true, true, true);
    mc.DisplayInfo();

    School s("Green Valley High", "Los Angeles", "John Doe", "Secondary", 1200, 80, 30, 1965, true, true);
    s.DisplayInfo();

    Book b("The Alchemist", "Paulo Coelho", "Fiction", "HarperOne", 1988, 208, true, true, true);
    b.DisplayInfo();

    Student st("Ahmad Ali", "Computer Science", "MIT", 21, 3, 90, 3.8, true, true, true);
    st.DisplayInfo();

    Job j("Software Developer", "Google", "San Francisco", "Full-time", 120000, 2, 40, true, true, true);
    j.DisplayInfo();

    return 0;
}
