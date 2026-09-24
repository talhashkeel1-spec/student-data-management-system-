#include <iostream>
#include <string>
using namespace std;

class dataa {
public:
    string name;
    string id;
    string no;
    string father;
    double amount;

    void getdata(){
    cout<<name<<endl;
    cout<< id<<endl;
    cout<< no<<endl;
    cout<< father<<endl;
    cout<< amount<<endl;
    }
    dataa (string names,string ids,string nos,string fathers,double amounts){
        name=names;
        id=ids;
        no=nos;
        father=fathers;
        amount = amounts;
         
    }

    
};

int main() {
    dataa a1("Asif","f2025","32","ahmed",321.34);
    
    a1.getdata();

    dataa a2("ali","f2025","32","zain",321.34);
    
    a2.getdata();
    

    return 0;
}