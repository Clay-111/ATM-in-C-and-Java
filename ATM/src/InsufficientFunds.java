import javax.swing.*;

public class InsufficientFunds extends Exception 
{

    
     // Creates a new instance of InsufficientFunds without detail
     
    public InsufficientFunds() {
    }

    
      //Constructs an instance of InsufficientFunds with the detail message
     
    public InsufficientFunds(String msg) 
    {
        super(msg);
        JFrame frame = new JFrame();
        JOptionPane.showMessageDialog(frame, "Insufficient Funds");
    }
}