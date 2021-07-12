class MedianFinder {

    /** initialize your data structure here. */
    
    ArrayList<Integer> data = new ArrayList<Integer>();
    int size;
    
    public MedianFinder() {
        this.data = data;
        this.size = size;
    }
    
    public void addNum(int num) {
        data.add(num);
        size = data.size();
        Collections.sort(data);
    }
    
    public double findMedian() {
        
        if(size % 2 == 0) {
            System.out.println(size);
            double high = data.get(size/2);
            double low = data.get((size/2)-1);
            return (high+low)/2;
        }
        int res = data.get((int)Math.floor(size/2));
        return (double) res;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */