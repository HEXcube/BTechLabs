
/**
 * Priority Queue uses HPFO(Highest Priority First Out) order.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */

public interface PriorityQueue
{
    public void createQueue();

    public void enQueue(PriNode temp);  //for static versions
    
    public void enQueue(PrioNode temp);  //for dynamic versions

    public void deQueue();

    public void displayQueue();
}
