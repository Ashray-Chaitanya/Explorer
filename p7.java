package sel;

import org.openqa.selenium.*;
import org.openqa.selenium.chrome.*;

public class Sel {
	public static void main(String[] args ) {
		WebDriver driver= new ChromeDriver();
		driver.get("https://www.saucedemo.com/");
		driver.manage().window().maximize();
		driver.findElement(By.id("user-name")).click();
		driver.findElement(By.id("user-name")).sendKeys("standard_user");
		driver.findElement(By.id("password")).sendKeys("secret_sauce");
		driver.findElement(By.id("login-button")).click();
		
		boolean flag=driver.findElement(By.xpath("//button[text()=\"Open Menu\"]")).isDisplayed();
		if(flag==true) {
			System.out.println("User is successfully logged in");
		}
		else {
				System.out.println("User is not successfully logged in");
			}
		driver.close();
	}
}
