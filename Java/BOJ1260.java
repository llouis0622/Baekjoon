import java.io.*;
import java.util.*;

public class Main {
    static int N;
    static int M;
    static int V;
    static List<Integer>[] list;
    static int index = 0;
    static int[] visit = new int[1001];
    static boolean end = true;

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String input = br.readLine();
        StringTokenizer st = new StringTokenizer(input);

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        V = Integer.parseInt(st.nextToken());
        list = new ArrayList[N + 1];

        for(int i=1 ; i<=N ; i++) {
            list[i] = new ArrayList<Integer>();
        }

        String[] inputs = new String[2];

        for(int i=1 ; i<=M ; i++) {
            input = br.readLine();
            inputs = input.split(" ");

            list[Integer.parseInt(inputs[0])].add(Integer.parseInt(inputs[1]));
            list[Integer.parseInt(inputs[1])].add(Integer.parseInt(inputs[0]));
        }

        for(int i=1 ; i<=N ; i++) {
            Collections.sort(list[i]);
        }

        visit[V] = 1;

        System.out.print(V + " ");

        index++;
        DFS(V);

        for(int i=1 ; i<=N ; i++) {
            visit[i] = 0;
        }

        System.out.println();

        BFS(V);

        System.out.println();
    }

    private static void BFS(int node) {
        Queue<Integer> queue = new LinkedList<Integer>();

        queue.add(node);
        visit[node] = 1;
        index = 1;

        while(queue.isEmpty() == false) {
            node = queue.remove();

            System.out.print(node + " ");

            for(int next : list[node]) {
                if(visit[next] == 0) {
                    index++;
                    visit[next] = 1;
                    queue.add(next);
                }
            }
        }
    }

    private static void DFS(int node) {
        for(int next : list[node]) {
            if(visit[next] == 0) {
                System.out.print(next + " ");

                index++;
                visit[next] = 1;
                DFS(next);
            }
        }
    }
}