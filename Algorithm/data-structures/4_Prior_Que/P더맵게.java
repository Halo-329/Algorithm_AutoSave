import java.util.*;

class P더맵게 {
    public int solution(int[] scoville, int K) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int turn = 0;

        for (var a : scoville) {
            pq.add(a);
        }

        while (true) {`
            int fst = pq.poll();

            if (fst >= K) break;

            if (pq.isEmpty()) {
                turn = -1;
                break;
            }

            turn++;

            int sec = pq.poll();
            pq.add(fst + (2 * sec));


        }

        return turn;
    }
}