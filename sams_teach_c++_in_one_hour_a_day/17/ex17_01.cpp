#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Please enter element(integer) as input add to vector:" <<endl;
    int inputInteger=0;
    cin >> inputInteger;
    vector<int> inputVectorIntegers;
    while(inputInteger!= -1)
    {
        inputVectorIntegers.push_back(inputInteger);

        cout << "enter integer (until -1 as end input): "  << endl;
        cin >> inputInteger;
    }

    if(inputInteger==-1)
    {
        cout << "congratu, finish input!!" << endl;
    }

    cout << "now, enter the index, for query.." << endl;

    cout << "now, the vecor is: "<< endl;

    for(auto iElement= inputVectorIntegers.begin()
            ; iElement != inputVectorIntegers.end()
            ; ++ iElement)
    {
        size_t a = distance(inputVectorIntegers.begin(),iElement);
        cout << "index:" << a<< "  "<<* iElement << endl;
    }
    cout << "you want to query the element in the vector, you need input the index:" << endl;
    size_t queryIndex=0;
    cin >> queryIndex;

    if(queryIndex< inputVectorIntegers.size())
    {
        cout <<"the query result:"<< inputVectorIntegers[queryIndex]<<endl;
    }
    return 0;
}
