public class DLL {
    private class Node {
        int value ;
        Node next ;
        Node prev;
        public Node(int val) {
            this.value = val;
        }
        public Node(int val , Node next , Node prev)
        {
            this.value = val;
            this.next = next;
            this.prev = prev;
        }
    } 
}
