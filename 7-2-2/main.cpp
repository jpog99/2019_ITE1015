#include <iostream>
#include <set>
#include <sstream>
#include <algorithm>
#include "setfunc.h"
using namespace std;

int main()
{
    string input;


    while(input != "0"){
        string token,op,str1,str2;
        set<int> setfinal,set1,set2;


        getline(cin,input);
        stringstream ss(input);



        //parsing set1
        while (getline(ss,token,' ')){
            if(token != "}")
                str1 += token + " ";
            else
                break;
        }
        set1 = parseSet(str1);

        //parsing operator
        while (getline(ss,token,' ')){
            op += token;
            break;
        }

        //parsing set2
        while (getline(ss,token,' ')){
            if(token != "}")
                str2 += token + " ";
            else
                break;
        }
        set2 = parseSet(str2);



        //calling operations
        if (op == "+"){
            setfinal = getUnion(set1,set2);
            cout<<"Union Set: "; printSet(setfinal);
        }

        if (op == "-"){
            setfinal = getDifference(set1,set2);
            cout<<"Difference Set: "; printSet(setfinal);
        }

        if (op == "*"){
            setfinal = getIntersection(set1,set2);
            cout<<"Intersection Set: "; printSet(setfinal);
        }



    }
    return 0;
}

