#include "Database.h"

class SchoolDatabase : Database {
	sql::ResultSet* res;
public:
	void show_students();

	void show_highest_students();

	void show_student_advisor();
};