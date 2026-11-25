class Node:
    def __init__(self, val):
        self.data  = val
        self.left  = None
        self.right = None

def insert(root, val):
    if not root: return Node(val)
    if val < root.data:   root.left  = insert(root.left,  val)
    elif val > root.data: root.right = insert(root.right, val)
    return root

def search(root, val):
    if not root: return False
    if root.data == val: return True
    return search(root.left, val) if val < root.data else search(root.right, val)

def delete_node(root, val):
    if not root: return None
    if val < root.data:   root.left  = delete_node(root.left,  val)
    elif val > root.data: root.right = delete_node(root.right, val)
    else:
        if not root.left:  return root.right
        if not root.right: return root.left
        s = root.right
        while s.left: s = s.left
        root.data = s.data
        root.right = delete_node(root.right, s.data)
    return root

def inorder(root):
    if not root: return []
    return inorder(root.left) + [root.data] + inorder(root.right)

def preorder(root):
    if not root: return []
    return [root.data] + preorder(root.left) + preorder(root.right)

def postorder(root):
    if not root: return []
    return postorder(root.left) + postorder(root.right) + [root.data]

def height(root):
    if not root: return 0
    return 1 + max(height(root.left), height(root.right))


if __name__ == "__main__":
    root = None
    for v in [50, 30, 70, 20, 40, 60, 80]:
        root = insert(root, v)

    print("Inorder   :", inorder(root))
    print("Preorder  :", preorder(root))
    print("Postorder :", postorder(root))
    print("Height    :", height(root))

    print("Search 40 :", "ada" if search(root, 40) else "tidak ada")
    print("Search 55 :", "ada" if search(root, 55) else "tidak ada")

    root = delete_node(root, 30)
    print("Inorder setelah hapus 30:", inorder(root))
