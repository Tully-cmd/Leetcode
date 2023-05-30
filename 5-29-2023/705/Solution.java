class MyHashSet {

  ArrayList<Integer> heap;

    public MyHashSet() {
      this.heap = new ArrayList<Integer>(10000);
    }
    
    public void add(int key) {
      if(heap.contains(key) == false) {
        heap.add(key);
      }
    }
    
    public void remove(int key) {
        int indexRem = heap.indexOf(key);
        if(indexRem >= 0) {
          heap.remove(indexRem);
        }   
    }
    
    public boolean contains(int key) {
        return heap.contains(key);
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */
