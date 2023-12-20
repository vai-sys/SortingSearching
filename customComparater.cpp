
// int print(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<endl;
//     }
// }
// bool mycomp(int &a, int &b){
//     return a>b;
// }
// int main(){
// vector<int>v={55,33,11,22,44};
// sort(v.begin(),v.end(),mycomp);
// print(v);
// return 0;

// }





#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int print(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}

void printvv(vector<vector<int>>& v){
    for(int i = 0; i < v.size(); i++){
        vector<int>& temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
}

bool mycomp(vector<int>& a, vector<int>& b){
    return a[1] > b[1];
}

int main(){
    vector<vector<int>> v;
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cout << "Enter a" << endl;
        cin >> a;
        cout << "Enter b" << endl;
        cin >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp); // Add the temp vector to v
    }

    cout << "Here are the values" << endl;
    printvv(v);

    cout << "After sorting" << endl;
    sort(v.begin(), v.end(), mycomp);

    cout << "After sorting" << endl;
    printvv(v);

    return 0;
}


