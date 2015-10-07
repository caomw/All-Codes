#include<iostream>
#include<vector>
#include<algorithm> // For sort()

using namespace std;

bool compare(const pair<float,string>&i, const pair<float,string>&j)
{
    return i.first < j.first;
}
int main()
{
    // Simple vector to store pairs
    vector<pair<float,string> >os;

    // Put some random data
    os.push_back(pair<float,string>(1.58, "Linux"));
    os.push_back(pair<float,string>(5.11, "Android"));
    os.push_back(pair<float,string>(68.16, "Windows"));
    os.push_back(pair<float,string>(8.45, "OS X"));
    os.push_back(pair<float,string>(9.89, "iOS"));
    os.push_back(pair<float,string>(5.41, "Other"));

    // Sort it
    sort(os.begin(),os.end(),compare);

    // Print
    for(int i=0;i<os.size();i++)
        cout << os.at(i).second << " (" << os.at(i).first << "%)"<< endl;
}
