bool lemonadeChange(vector<int> &bill) {

    int five = 0;

    int ten = 0;

    int n = bill.size();

    for(int i=0;i<n;i++){

        if(bill[i] == 5){

            five++;

        }

        else if(bill[i] == 10){

            if(five<0) return false;

            five--;

            ten++;

        }

        else if(bill[i] == 20){

            if(ten>0 && five>0){

                ten--;

                five--;

            } 

            else{

                five -= 3;

            }

            if(five < 0){

                return false;

            }

        }

    }

    return true;

}
