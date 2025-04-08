public class Account 
{
  
    private double balance;
    private int withdrawals;
  
    //Constructor that initializes instance variables
   
    public Account(double initialBalance)
    {
      
        balance = initialBalance;
        withdrawals = 0;
    
    }
  
    //Returns the balance of the account
  
    public double getBalance()
    {
      
        return balance;
    }
  
    //Adds to the balance of the account
    
    public void deposit(double amount)
    {
      
        balance += amount;
      
    }
  
    // Returns the balance of the account
     
    public void withdraw(double amount) throws InsufficientFunds{
      
        if(amount > balance)
        {
            throw new InsufficientFunds("Insufficient Funds");
        }
        else
        {
            balance -= amount;
            withdrawals++;
        }
      
    }
    
    public int getWithdrawals()
    {
        return withdrawals;
    }
  
    
    public void serviceFee() throws InsufficientFunds{
        if(1.5 > balance)
        {
            throw new InsufficientFunds("Insufficient Funds");
        }
        else
        {
            balance -= 1.5;
        }
    }
}