int countOne = 0;
int countTwo = 1;

vector<int> small;
vector<int> generateFibonacciNumbers(int n) {

    if (n == 2){
        return {0,1};
    }

    if (n <= 1) {
        return {0};
    }


   if(small.size() < 1){
        small.push_back(0);
        small.push_back(1);
   }

    int sum = small[countOne] + small[countTwo];

    small.push_back(sum);

    countOne++;
    countTwo++;

    generateFibonacciNumbers(n - 1);

    return small;

}
