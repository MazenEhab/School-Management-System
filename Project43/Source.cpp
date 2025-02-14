#include "SchoolDatabase.h"


void main()
{
	 SchoolDatabase db;
	 db.show_highest_students();
	
}

/*
		res = stmt->executeQuery("SELECT * from teachers");

		cout << "+-----------------------------------------------+\n";
		cout << "| " << left << setw(3) << "ID" << " | "
			<< left << setw(13) << "First Name" << " | "
			<< left << setw(13) << "Last Name" << " | "
			<< left << setw(6) << "Grade" << "|\n";
		cout << "+-----------------------------------------------+\n";

		while (res->next()) {
			cout << "| " << left << setw(3) << res->getInt("student_id") << " | "
				<< left << setw(13) << res->getString("student_first_name") << " | "
				<< left << setw(13) << res->getString("student_last_name") << " | "
				<< left << setw(6) << res->getString("student_grade") << "|\n";
		}
*/