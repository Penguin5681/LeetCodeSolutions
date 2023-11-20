// 2391. Minimum Amount of Time to Collect Garbage

impl Solution {
    pub fn garbage_collection(garbages: Vec<String>, travel: Vec<i32>) -> i32 {
        const M: char = 'M';
        const G: char = 'G';
        const P: char = 'P';

        let idx_l_g = Self::get_last_idx(&garbages, G);
        let idx_l_m = Self::get_last_idx(&garbages, M);
        let idx_l_p = Self::get_last_idx(&garbages, P);

        let ans = Self::get_time(&garbages, &travel, idx_l_g, G)
            + Self::get_time(&garbages, &travel, idx_l_m, M)
            + Self::get_time(&garbages, &travel, idx_l_p, P);

        ans
    }

    fn get_time(garbages: &[String], travel: &[i32], last_idx: usize, target: char) -> i32 {
        if last_idx == garbages.len() {
            return 0;
        }

        let mut time = 0;
        for idx in 0..=last_idx {
            let g = &garbages[idx];
            time += g.chars().filter(|&ch| ch == target).count() as i32;
            if idx > 0 {
                time += travel[idx - 1];
            }
        }

        time
    }

    fn get_last_idx(garbages: &[String], target: char) -> usize {
        garbages.iter().rposition(|g| g.contains(target)).unwrap_or(garbages.len())
    }
}

fn main() {

}