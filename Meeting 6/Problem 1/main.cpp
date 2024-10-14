#include <iostream>
using namespace std;

struct StudentRec {
        int uts;
        int nim;
        int uas;
 };
 StudentRec theStudent[50];
int main() {
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"Enter the NIM of the student : ";
        cin>>theStudent[i].nim;
        cout<<"Enter the score for UTS : ";
        cin>>theStudent[i].uts;
        cout<<"Enter the score for UAS : ";
        cin>>theStudent[i].uas;
        
         }
    cout<<"===================================="<<endl;
    for (int i=0;i<n;i++) {
        cout<<"NIM : "<<theStudent[i].nim<<endl;
        cout<<"Average Score : "<<(theStudent[i].uts + theStudent[i].uas)/2<<endl;
    }
    return 0;
}
