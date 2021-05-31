#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define pb push_back

template <typename T>
void print(vector<T> vect){
    for (T x: vect){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    //Initializing vector using push_back()
    vector<string> vs;
    vs.pb("Hey!");
    vs.pb("How");
    vs.pb("are");
    vs.pb("you?");
    print(vs);
    
    //arg1: size of vector
    //arg2: value to initialise with. all element will initialisewith same value
    vector<int> vi(5,10);
    print(vi);
    
    // Like and array
    vector<float> vf{1.2,2.5,9.1,8.2,3.7};
    print(vf);
    
    //From an array
    int arr[]={2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> va(arr,arr+n);
    print(va);
    
    //From another vector
    vector<string> v1{"This","is","to","copy","a","vector"};
    vector<string> v2(v1.begin(),v1.end());
    print(v2);
    
    //initialise with particular value
    vector<int> vp(10);
    int value=3;
    fill(vp.begin(),vp.end(),value);
    print(vp);
    
    return 0;
}
