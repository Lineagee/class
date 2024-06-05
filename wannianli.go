package main

import "fmt"

func runnian(year int) bool {
    return year % 4 == 0
}

func day(month int, year int) int {
    if month == 2 {
        if runnian(year) {
            return 29
        } else {
            return 28
        }
    } else if month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 {
        return 31
    } else {
        return 30
    }
}

func total(year int) {
    var i, j, total_day, week, month, days int
    total_day = 0
    for i = 2023; i < year; i++ {
        if runnian(i) {
            total_day += 366
        } else {
            total_day += 365
        }
    }
    week = (total_day + 1) % 7
    fmt.Println("Sun Mon Tue Wed Thu Fri Sat\n")
    for j = 1; j < week; j++ {
        fmt.Print("    ")
    }
    for month = 1; month <= 12; month++ {
        for days = 1; days <= day(month, year); days++ {
            fmt.Printf("%4d", days)
            if (total_day+days) % 7 == 0 {
                fmt.Println("\n")
            }
        }
		fmt.Println("\n")
        total_day += day(month, year)
		week = (total_day + 1) % 7
		 for j = 1; j < week; j++ {
        fmt.Print("    ")
    }
    }
    fmt.Println("\n")
}

func main() {
    var year int
    fmt.Println("What year is this?\n")
    fmt.Scanf("%d", &year)
    total(year)
}
