import java.util.HashMap;
import java.util.Map;

public class toeplitzMatrix {
    public boolean isTPM(int[][] matrix) {
        Map<Integer, Integer> pairs = new HashMap();
        for (int r = 0; r < matrix.length; ++r) {
            for (int c = 0; c < matrix[0].length; ++c) {
                if (!pairs.containsKey(r-c))
                    pairs.put(r-c, matrix[r][c]);
                else if (pairs.get(r-c) != matrix[r][c])
                    return false;
            }
        }
        return true;
    }
}
