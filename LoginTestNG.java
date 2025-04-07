package testNG;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.testng.annotations.Test;

public class LoginTestNG {
	
	WebDriver driver;
	
	@Test(priority=1)
	void openBrowser() {
		driver=	new ChromeDriver();
		driver.get("https://www.saucedemo.com/");
		driver.manage().window().maximize();
		System.out.println("Open Browser");
	}
	

	@Test(priority=2)
	void login() {
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
		System.out.println("Login to application");
	}
	
	
	@Test(priority=3)
	void close() {
		driver.close();

	}

}
