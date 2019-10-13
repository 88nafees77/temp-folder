/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package MultiThreading;

/**
 *
 * @author nafees
 */
public class YieldDemo extends Thread {

    public void run() {
        for (int i = 0; i < 50; i++) {
            
            System.out.println("child Thread");
            Thread.yield();
            
        }
    }
}
class M{
    public static void main(String[] args){
       YieldDemo demo=new YieldDemo();
       demo.start();
       for(int i=0;i<50;i++){
           System.out.println("Parent Thread");
       }
    }
}

