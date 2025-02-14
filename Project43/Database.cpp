#include "Database.h"

Database::Database()
{
	try {
		driver = sql::mysql::get_mysql_driver_instance();

		conn = driver->connect(ip, name, password);
		conn->setSchema(DB);

		stmt = conn->createStatement();
	}
	catch (sql::SQLException& e) {
		cout << "Error: " << e.what() << '\n';
	}
}
