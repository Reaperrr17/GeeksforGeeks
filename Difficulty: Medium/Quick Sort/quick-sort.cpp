class Solution {
    public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int i=low;
	int j=high;

	int pivot = arr[low];

	while(i<j){
		while(i!=high+1 && arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
    }
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high)
		return;
	int index = partition(arr,low,high);
	quickSort(arr,low,index-1);
	quickSort(arr,index+1,high);
    }

  
};