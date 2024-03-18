// 452. Minimum Number of Arrows to Burst Balloons

impl Solution {
    pub fn find_min_arrow_shots(points: Vec<Vec<i32>>) -> i32 {
        if points.is_empty() {
            return 0;
        }

        let mut sorted_points = points;
        sorted_points.sort_by(|a, b| a[1].cmp(&b[1]));

        let mut arrows = 1;
        let mut current_end = sorted_points[0][1];

        for i in 1..sorted_points.len() {
            let balloon = &sorted_points[i];
            let start = balloon[0];
            let end = balloon[1];

            if start > current_end {
                arrows += 1;
                current_end = end; 
            }
        }
        arrows
    }
}

fn main() {
    let points1 = vec![vec![10,16],vec![2,8],vec![1,6],vec![7,12]];
    println!("Minimum arrows needed: {}", Solution::find_min_arrow_shots(points1)); // Output: 2

    let points2 = vec![vec![1,2],vec![3,4],vec![5,6],vec![7,8]];
    println!("Minimum arrows needed: {}", Solution::find_min_arrow_shots(points2)); // Output: 4

    let points3 = vec![vec![1,2],vec![2,3],vec![3,4],vec![4,5]];
    println!("Minimum arrows needed: {}", Solution::find_min_arrow_shots(points3)); // Output: 2
}
