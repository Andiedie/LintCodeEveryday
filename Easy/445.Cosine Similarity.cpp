class Solution {
public:
    /**
    * @param A: An integer array.
    * @param B: An integer array.
    * @return: Cosine similarity.
    */
    double cosineSimilarity(vector<int> A, vector<int> B) {
        // write your code here
        int dotProduct = 0;
        double normA = 0, normB = 0;
        for (int i = 0; i < A.size(); i++) {
            dotProduct += A[i] * B[i];
            normA += A[i] * A[i];
            normB += B[i] * B[i];
        }
        normA = sqrt(normA);
        normB = sqrt(normB);
        if (normA * normB == 0) return 2.0f;
        return dotProduct / (normA * normB);
    }
};
