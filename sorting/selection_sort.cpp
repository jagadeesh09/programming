/*
                  Algorithm : Selection sorting
                  Inplace sorting algorithm
                  Time complexity : O(n*2)                                   */

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int>& SelectionSort(vector<int> &arr){
  int n = arr.size();
  for( int i = 0; i < n; i++){
    int min_el = INT_MIN;
    int index = 0;
    for(int j = i; j < n ; j++){
      if( arr[j] > min_el ){
        min_el = arr[j];
        index = j;
      }
    }
    int tmp = arr[i];
    arr[i] = min_el;
    arr[index] = tmp;
  }
  return arr;
}
int main(){
  int n;
  cin >> n;
  vector<int> arr;
  while( n > 0){
    int element;
    cin >> element;
    arr.push_back(element);
    n--;
  }
  SelectionSort(arr);
  for(int i = 0; i < arr.size() ; i++){
    cout << arr[i] << " ";
  }
  cout << " " << endl;
}
