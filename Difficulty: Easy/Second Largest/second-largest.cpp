class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maximum = arr[0];
        int secondmaximum = -1;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]>maximum){
                secondmaximum = maximum;
                maximum = arr[i];
            }
            else if(arr[i]<maximum && arr[i]>secondmaximum){
                secondmaximum = arr[i];
            }
        }
        return secondmaximum;
    }
};