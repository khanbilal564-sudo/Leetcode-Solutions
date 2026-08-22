class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        queue<int> qe;

        for(int i=0;i<tickets.size();i++){
            qe.push(i);
        }

        int time = 0;

        while(!qe.empty()){
            time++;

            int front=qe.front();
            qe.pop();

            tickets[front]--;

            if(k==front && tickets[front]==0){
                return time;
            }

            if(tickets[front]!=0){
                qe.push(front);
            }
        }

        return time;
        
    }
};