class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        ArrayList<Integer> wholeList = new ArrayList<>();
        for(int i = 0; i < matrix.length; i++) {
            for(int j = 0; j < matrix[i].length; j++) {
                wholeList.add(matrix[i][j]);
            }
        }
        Collections.sort(wholeList);
        return wholeList.get(k-1);
    }
}