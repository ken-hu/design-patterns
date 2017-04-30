/**
 * @file client.cc
 * Collaborates with objects conforming to the Target interface.
 * @author Ken Hu
 */

#include "DatabaseTableOperation.h"
#include "PostgresTableOperationAdapter.h"

int main()
{
    DatabaseTableOperation* dbTableOperation = new PostgresTableOperationAdapter;

    dbTableOperation->createTable("TableA");
    dbTableOperation->showTable("TableA");
    dbTableOperation->dropTable("TableA");

    delete dbTableOperation;

    return 0;
}

