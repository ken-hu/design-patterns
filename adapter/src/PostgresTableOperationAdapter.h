/**
 * @file PostgresTableOperationAdapter.h
 * Adapt the interface of Adaptee to the Target interface.
 * @author Ken Hu
 */

#pragma once

#include <iostream>
#include <string>

#include "DatabaseTableOperation.h"
#include "PostgresTableOperation.h"

class PostgresTableOperationAdapter : public DatabaseTableOperation, private PostgresTableOperation
{
public:
    virtual void createTable(std::string tableName) {
        std::cout << "CREATE TABLE " + tableName + " {...}" << std::endl;
    }

    virtual void dropTable(std::string tableName) {
        std::cout << "DROP TABLE " + tableName << std::endl;
    }

    virtual void showTable(std::string tableName) {
        backslashD(tableName);
    }
};
