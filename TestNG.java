package testNG;

import org.testng.annotations.Test;

public class TestNG {
	
	@Test(priority=1)
	void openBrowser() {
		System.out.println("Open Browser");
	}
	@Test(priority=2)
	void login() {
		System.out.println("Login to application");
	}
	@Test(priority=3)
	void close() {
		System.out.println("Close Browser");
	}

}
