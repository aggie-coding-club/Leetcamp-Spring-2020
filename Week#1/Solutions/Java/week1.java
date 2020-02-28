import java.util.Arrays;

public class week1 {
    public static void main(String[] args){
        System.out.println("Two Sum problem\n");

        twoSumProblem example1 = new twoSumProblem();
        int[] myArray11 = new int[]{2,4,5,6,7,8};
        int[] sol11 = example1.twoSum1(myArray11,9);
        System.out.println("\tBrute Force Implementation: " +Arrays.toString(sol11));

        int[] myArray12 = new int[]{2,4,5,6,7,8};
        int[] sol12 = example1.twoSum1(myArray12,9);
        System.out.println("\tTwo-pass Hash Table: " + Arrays.toString(sol12));

        int[] myArray13 = new int[]{2,4,5,6,7,8};
        int[] sol13 = example1.twoSum1(myArray13,9);
        System.out.println("\tOne-pass Hash Table: " + Arrays.toString(sol13));

        System.out.println("Search Insert Position\n");

        searchInsertPosition example2 = new searchInsertPosition();
        int[] myArray21 = new int[]{1,3,5,6};
        int sol21 = example2.searchInsert(myArray21,6);
        System.out.println("\tBinary Tree: " +(sol21));

        int[] myArray22 = new int[]{2,4,5,6,7,8};
        int sol22 = example2.searchInsert1(myArray22,9);
        System.out.println("\tBrute Force: " + (sol22));

        System.out.println("Toeplitz Matrix\n");

        toeplitzMatrix example3 = new toeplitzMatrix();
        int[][] matrix31 = new int[][]{{1,2,3,4},{5,1,2,3},{9,5,1,2}};
        boolean sol31 = example3.isTPM(matrix31);
        System.out.println("\tBy Groups: " + (sol31));

    }
}
