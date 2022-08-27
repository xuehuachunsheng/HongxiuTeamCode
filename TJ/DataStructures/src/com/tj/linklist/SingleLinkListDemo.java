package com.tj.linklist;

import java.util.Stack;

import static com.tj.linklist.SingleLinkList.*;

public class SingleLinkListDemo {

    public static void main(String[] args) {

        HeroNode hero1 = new HeroNode(1, "soj", "jsy");
        HeroNode hero2 = new HeroNode(2, "wuy", "yql");
        HeroNode hero3 = new HeroNode(3, "lujy", "zdx");
        HeroNode hero4 = new HeroNode(4, "linc", "bzt");

        SingleLinkList singleLinkList = new SingleLinkList();

        singleLinkList.add(hero1);
        singleLinkList.add(hero2);
        singleLinkList.add(hero3);
        singleLinkList.add(hero4);
        singleLinkList.list();

        //链表数据个数
        System.out.println("链表个数为"+getLength(singleLinkList.getHead()));

        System.out.println("单链表的反转~~");
        reverseList(singleLinkList.getHead());
        singleLinkList.list();

        System.out.println("逆序打印单链表~~");
        reversePrint(singleLinkList.getHead());

//        singleLinkList.addByOrder(hero1);
//        singleLinkList.addByOrder(hero4);
//        singleLinkList.addByOrder(hero3);
//        singleLinkList.addByOrder(hero2);

//        singleLinkList.list();
//
//        HeroNode newHearNode = new HeroNode(3, "卢俊义", "引起了");
//        singleLinkList.update(newHearNode);
//
//        System.out.println("修改后的情况！");
//        singleLinkList.list();
//
//        singleLinkList.del(1);
//        singleLinkList.del(4);
//        singleLinkList.del(2);
//
//        System.out.println("删除后的情况！");
//        singleLinkList.list();

    }
}

class SingleLinkList {

    //先初始化一个头节点，头节点不要动,不存放任何数据
    private HeroNode head = new HeroNode(0, "", "");

    public HeroNode getHead() {
        return head;
    }

    //添加节点到单向链表
    //思路，当不考虑编号顺序时
    //1。找到当前链表的最后位置
    //2。将最后位置的next指向新的节点
    public void add(HeroNode heroNode) {
        //因为head节点不能动，因此我们需要一个辅助遍历temp
        HeroNode temp = head;
        while (true) {
            //找到链表最后
            if (temp.next == null) {
                break;
            }
            //如果没有找到最后，将temp后移
            temp = temp.next;
        }
        //当退出while循环时，temp就指向了链表的最后
        //将最后节点的next指向新的节点
        temp.next = heroNode;
    }

    //第二种添加英雄时，根据排名将英雄插入到指定位置
    //如果有这个排名，则添加失败，并给出提示
    public void addByOrder(HeroNode heroNode) {
        //因为头节点不能动，因此我们任然通过一个辅助指针(变量)来帮助我们找到添加的位置
        //因为单链表，因为我们找的temp是位于添加位置的前一个节点，否则插入不了
        HeroNode temp = head;
        boolean flag = false;
        while (true) {
            if (temp.next == null) {
                break;
            }
            if (temp.next.no > heroNode.no) {
                break;
            } else if (temp.next.no == heroNode.no) {
                flag = true;
                break;
            }
            temp = temp.next;
        }
        if (flag) {
            System.out.println("准备添加的编号存在!");
        } else {
            heroNode.next = temp.next;
            temp.next = heroNode;
        }
    }

    //修改节点信息
    public void update(HeroNode newHeroNode) {
        if (head.next == null) {
            System.out.println("链表为空");
            return;
        }
        HeroNode temp = head.next;
        boolean flag = false;
        while (true) {
            if (temp == null) {
                break;
            }
            if (temp.no == newHeroNode.no) {
                flag = true;
                break;
            }
            temp = temp.next;
        }
        if (flag) {
            temp.name = newHeroNode.name;
            temp.nickname = newHeroNode.nickname;
        } else {
            System.out.println("没有找到！");
        }
    }

    //删除节点
    public void del(int no) {
        HeroNode temp = head;
        boolean flag = false;
        while (true) {
            if (temp == null) {
                break;
            }
            if (temp.next.no == no) {
                flag = true;
                break;
            }
            temp = temp.next;
        }
        if (flag) {
            temp.next = temp.next.next;
        } else {
            System.out.println("要删除的节点不存在！");
        }
    }

    //查找单链表中的倒数第k个节点【新浪面试题】
    public static HeroNode findLastIndexNode(HeroNode head, int index) {
        if (head.next == null) {
            return null;
        }
        //得到链表长度
        int size = getLength(head);
        if (index <= 0 || index >= size) {
            return null;
        }
        HeroNode cur = head.next;
        for (int i = 0; i < size - index; i++) {
            cur = cur.next;
        }
        return cur;
    }

    //单链表反转【腾讯面试题】
    public static void reverseList(HeroNode head) {
        //如果当前链表为空或者只有一个节点，无需反转，直接返回
        if (head.next == null || head.next.next == null) {
            return;
        }
        //定义一个辅助的指针（变量），来帮助我们遍历原来的链表
        HeroNode cur = head.next;
        HeroNode next = null;
        HeroNode reHead = new HeroNode(0, "", "");
        //遍历原来的链表，没遍历一个节点，就将其取出，并放在新的链表reHead的最前端
        while (cur != null) {
            next = cur.next;//先暂时保存当前节点的下一个节点，后面有用
            cur.next = reHead.next;//将cur的下一个节点指向新的节点的最前端
            reHead.next = cur;
            cur = next;//让cur后移
        }
        //连接
        head.next = reHead.next;
    }

    //逆序打印节点【百度面试题】
    public static void reversePrint(HeroNode head) {
        if (head.next == null) {
            return;
        }
        Stack<HeroNode> stack = new Stack<HeroNode>();
        HeroNode cur = head.next;
        while (cur != null) {
            stack.push(cur);
            cur = cur.next;//后移
        }
        //将栈中的节点打印出来
        while (stack.size() > 0) {
            System.out.println(stack.pop());
        }
    }

    //获取到单链表的节点个数
    public static int getLength(HeroNode head) {
        if (head.next == null) {
            return 0;
        }
        int length = 0;
        HeroNode cur = head.next;
        while (cur != null) {
            length++;
            cur = cur.next;
        }
        return length;
    }

    //显示链表信息
    public void list() {
        if (head.next == null) {
            System.out.println("链表为空");
            return;
        }
        HeroNode temp = head.next;
        while (true) {
            if (temp == null) {
                break;
            }
            //输出节点信息
            System.out.println(temp);
            //将temp后移
            temp = temp.next;
        }
    }
}


class HeroNode {
    public int no;
    public String name;
    public String nickname;
    public HeroNode next;

    //构造器(构造方法，构造函数)
    //构造器的名称必须和类名一致
    //作用：实例化对象，给对象赋初值
    public HeroNode(int hNo, String hName, String hNickname) {
        this.no = hNo;
        this.name = hName;
        this.nickname = hNickname;
    }

    //为了显示方法，我们重新toString
    @Override
    public String toString() {
        return "HeroNode [no=" + no + ",name=" + name + ",nickname=" + nickname + "]";
    }
}
