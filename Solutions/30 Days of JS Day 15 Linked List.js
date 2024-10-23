// Task:
/*
Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor 
argument) and inserts it at the tail of the linked list referenced by the head parameter. Once the new node 
is added, return the reference to the head node.
Note: The head argument is null for an empty list.
*/

function Solution() {
  this.insert = function (head, data) {
    let node = new Node(data);
    let current = head;
    if (!head) {
      return node;
    } else {
      while (current.next) {
        current = current.next;
      }
      current.next = node;
    }
    return head;
  };
}
