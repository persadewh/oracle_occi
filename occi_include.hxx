#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <string>
#include <oci.h>
#include <occi.h>

using namespace oracle:occi;
using namespace std;

int main(){

    Environment *env;
    Connection *conn;
    Statement *stmt;

    string user = "";
    string passwd = "";
    string db = "(DESCRIPTION = (ADDRESS = (PROTOCOL = TCP)(HOST = XXX.XXX.XXX.XXX)(PORT = 1521))(CONNECT_DATA = (SERVICE_NAME = XXXX)))";

    env = Environment::createEnvironment(Environment::DEFAULT);
    conn = env->createConnection(user, passwd, db);

    if(NULL != conn){
        printf("Login successful");
        string sql = "SELECT * FROM XXX";
        stmt = conn->createStatement(sql);
        ResultSet *rSet = stmt->executeQuery();
        while(rSet->next()){
            printf("%s\n", rSet->getString(1).c_str());
        }
        stmt->closeResultSet(rSet);
        conn->terminateStatement(stmt);
    }
    return 0;
}
