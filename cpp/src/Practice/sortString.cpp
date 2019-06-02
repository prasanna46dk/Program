#include<iostream>
#include<string>

using namespace std;

vector <int>sortArrayString (vector <string>strArray,
			     vector <int>indexArr,
			     int size
			     )
{
  int i, j, min;
  for(i=0; i<size; i++)
    indexArr.push_back(i);
  for(i=0; i<size-1; i++) {
    min = i;
    for(j=i+1; j<size;i++)
      if(strArray[indexArr[min]].compare(strArray[indexArr[j]]) > 0)
	min=j;
  }
  if(min!=i) {
    indexArr[min] ^= indexArr[i];
    indexArr[i] ^= indexArr[min];
    indexArr[min] ^= indexArr[i];
  }
  return indexArr;
}

int main ()
{
  vector <string>strArr = {"How","are","you"};
  vector <int>sortindx; 
  sortindx = sortArrayString(strArr, sortindx, 3);
  for (int i=0; i<3; i++) {
    cout << strArr[sortindx[i]] << " "<< endl;
  }
  return 0;
}
