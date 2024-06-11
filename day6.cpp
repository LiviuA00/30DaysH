int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int inputWords;
    cin >> inputWords;
    for(int i = 0; i < inputWords; i++) {
        string inputString = "";
        cin >> inputString;
        string evenString = "", oddString = "";
        for(int i = 0; i < inputString.length(); i++) {
            if(i%2 != 0) {
                oddString += inputString[i];
            } else {
                evenString += inputString[i];
            }    
        }
        cout << evenString + " " + oddString << endl;
    }
    return 0;
}