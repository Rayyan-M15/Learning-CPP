//Code360: Adding two arrays

#include <iostream>
#include <vector>
using namespace std;
//the answer given by the main function is in the reverse order than what our 
vector<int> reverse(vector<int>& v){
	int s = 0;
	int e = v.size()-1;
	while(s<e){
		swap(v[s++], v[e--]);
	}

	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m - 1;
	int carry = 0;
	vector<int> ans;

    //first case: we handle the overllaping part of the arrays
	while(i>=0 && j>=0){
		int val1 = a[i];
		int val2 = b[j];
		
		int sum = val1 + val2 + carry;

		carry = sum /10;
		sum = sum%10;

		ans.push_back(sum);

		i--;
		j--;

	}

    //second case: we handle the remaining part of the first array, if it is longer than the second array
	while(i>=0){
		int sum = a[i] + carry;

		carry = sum /10;
		sum = sum%10;

		ans.push_back(sum);

		i--;
	}

    //third case: we handle the remaining part of the second array in case it is longer than the first array
	while(j>=0){
		int sum = b[j] + carry;

		carry = sum /10;
		sum = sum%10;

		ans.push_back(sum);

		j--;
	}

    //fourth case: when both the arrays are of the same length but have a carry value 
	while(carry!=0){
		int sum =carry;
		carry = sum /10;

		sum = sum%10;

		ans.push_back(sum);
	}

	return reverse(ans);
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {6};
    int n = a.size(), m = b.size();

    vector<int> final = findArraySum(a, n, b,m);

    for(int i:final){
        cout<< i <<" ";
    }cout<<endl;


    return 0;
}