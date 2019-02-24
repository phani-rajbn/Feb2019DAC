#pragma once
#include"CommonFunctions.h"
class AnyDatabase {
public: 
	string dbName;
	AnyDatabase(string name)
	{
		dbName = name;
	}
};
class SqlServerDatabase :public AnyDatabase {
public:
	SqlServerDatabase(string name) : AnyDatabase(name)
	{

	}
};

class MySqlDatabase :public AnyDatabase {
public:
	MySqlDatabase(string name) : AnyDatabase(name)
	{

	}
};

class EmpRepository {
private:
	AnyDatabase* dbServer;
public:
	EmpRepository(AnyDatabase* db)//constructor
	{
		dbServer = db;
	}
	void AddNewEmployee(int id, string name, string address) {
		print("The data is added to the " + dbServer->dbName);
	}

	void UpdateEmployee(int id, string name, string address) {
		print("The data is updated to the " + dbServer->dbName);
	}

	void DeleteEmployee(int id) {
		print("The data is deleted from the " + dbServer->dbName);
	}
	/*Hold any type of data in it. But when U want to perform any type specific operations, then U should type cast(Convert) it to the type U want to convert and do the operations*/
	void* GetAllEmployees() {
		return "All the data is retrieved";
	}
};