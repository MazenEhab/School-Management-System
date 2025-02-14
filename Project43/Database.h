#include "DatabaseConfig.h"

class Database {
protected:
	sql::mysql::MySQL_Driver* driver;
	sql::Connection* conn;

	sql::Statement* stmt;
public:
	Database();
};