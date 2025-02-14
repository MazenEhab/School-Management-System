#include "SchoolDatabase.h"

void SchoolDatabase::show_students()
{
    system("cls");

    res = stmt->executeQuery("select student_id, student_first_name, student_last_name, student_gpa, student_advisor_id from students");

    cout << "+-----------------------------------------------------+\n";
    cout << "| " << left << setw(3) << "ID" << " | "
        << left << setw(12) << "First Name" << " | "
        << left << setw(11) << "Last Name" << " | "
        << left << setw(6) << "Grade" << " | "
        << left << setw(6) << "Advisor ID" << " |\n";
    cout << "+-----------------------------------------------------+\n";

    while (res->next())
    {
        cout << "| " << left << setw(3) << res->getInt("student_id") << " | "
        << left << setw(12) << res->getString("student_first_name") << " | "
        << left << setw(11) << res->getString("student_last_name") << " | "
        << left << setw(6) << res->getString("student_gpa") << " | "
        << left << setw(7) << res->getString("student_advisor_id") << " |\n";
    }
    cout << "+-----------------------------------+\n";

}

void SchoolDatabase::show_highest_students()
{
    res = stmt->executeQuery("select student_id, student_first_name, student_gpa from students teachers order by student_gpa desc");

    cout << "+-----------------------------------+\n";
    cout << "| " << left << setw(3) << "ID" << " | "
        << left << setw(12) << "First Name" << " | "
        << left << setw(7) << "GPA" << " |\n";
    cout << "+-----------------------------------+\n";

    while (res->next())
    {
        cout << "| " << left << setw(3) << res->getInt("student_id") << " | "
            << left << setw(12) << res->getString("student_first_name") << " | "
            << left << setw(12) << res->getString("student_gpa") << " |\n";

    }
    cout << "+-----------------------------------+\n";
}

void SchoolDatabase::show_student_advisor()
{
    res = stmt->executeQuery("select student_id, student_first_name, teacher_first_name from students inner join teachers where student_advisor_id = teachers.teacher_id");
    
    cout << "+-----------------------------------+\n";
    cout << "| " << left << setw(3) << "ID" << " | "
        << left << setw(12) << "First Name" << " | "
        << left << setw(7) << "Advisor Name" << " |\n";
    cout << "+-----------------------------------+\n";

    while (res->next())
    {
        cout << "| " << left << setw(3) << res->getInt("student_id") << " | "
            << left << setw(12) << res->getString("student_first_name") << " | "
            << left << setw(12) << res->getString("teacher_first_name") << " |\n";

    }
    cout << "+-----------------------------------+\n";

}