#include "connection.h"
#include "QSqlDatabase"
Connection::Connection()
{
//test Tutorial git
}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet_2A20");//inserer le nom de la source de données ODBC
db.setUserName("ahlem");//inserer nom de l'utilisateur
db.setPassword("ahlem");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
