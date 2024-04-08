int calcGCD(int n, int m){
    // Write your code here.  
    while (m != 0) {

            int temp = m;
            m = n % m;
            n = temp;
        }
        return n;
}
