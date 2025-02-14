#ifndef DATABASE_CONFIG_H
#define DATABASE_CONFIG_H

#include <iostream>
#include <iomanip>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>

using namespace std;
using namespace sql;

const string ip = "tcp://127.0.0.1:3306";
const string password = "A7almfoo";
const string name = "root";
const string DB = "school_db";

#endif
