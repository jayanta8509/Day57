/*Anusree is struggling to pass a certain college course.
The test has a total of N question, each question carries 3 marks for a correct answer and −1 for an incorrect answer. Anusree is a risk-averse person so he decided to attempt all the questions. It is known that Anusree got X questions correct and the rest of them incorrect. For Anusree to pass the course he must score at least P marks.
Will Anusree be able to pass the exam or not?
Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers N, X, P.
Output Format
For each test case output ""PASS"" if Chef passes the exam and ""FAIL"" if Chef fails the exam.
You may print each character of the string in uppercase or lowercase (for example, the strings ""pAas"", ""pass"", ""Pass"" and ""PASS"" will all be treated as identical).

Sample Input 1
3
5 2 3
5 2 4
4 0 0
Sample Output 1
PASS
FAIL
FAIL
"
*/
#include <iostream>
using namespace std;

int main() {
  int t;
	cin>>t;
	while(t--){
	    int n,x,p;
        cin>>n>>x>>p;
    int correct_marks=x*3;
    int incorrect_marks = (n - x)*1 ;
    int totall_marks=correct_marks - incorrect_marks;
    if(totall_marks>=p){
      cout<<"PASS"<<endl;
    }
    else{
        cout<<"FAIL"<<endl;
    }
    }
}